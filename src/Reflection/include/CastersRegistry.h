#pragma once

#include <iostream>
#include <memory>
#include <unordered_map>
#include <type_traits>
#include <functional>


    struct CasterBase{
/*        virtual void printType( const std::string& typeName ){ std::std::cout << " CasterBase  printType " << std::endl;  }
        virtual void castAndPrint( void** data ){ std::std::cout << " CasterBase  castAndPrint " << std::endl;  }
        virtual void castAndPrint2( void*& data ){ std::std::cout << " CasterBase  castAndPrint2 " << std::endl;  }
        virtual void setFFIvalueElement( void*& data, const std::string& typeName, int pos, std::shared_ptr< void* >& ffiValArr ){ std::std::cout << " CasterBase  setFFIvalueElement " << std::endl;  }
*/
    };
    
    
    template< typename T >
    struct Caster : CasterBase {
   //     std::function<void(void*)> getPrinter(){ return castAndPrint; }
        static T getType(){ static T aux{}; return aux; }

        static T* cast( void** data ) { return static_cast<T*>(*data); }

        void printType( const std::string& typeName ) { std::cout<< typeid( T ).name() <<std::endl; }
        
/* Needs to be a double pointer in the sense that I need to have "by reference access" to the original pointer I am working on. Similar to CUDA API for uploading data to GPU memory. */ 
        void castAndPrint( void** data ) {
            if( *data != nullptr ){ // If the original pointer does contain data
                T* aux = static_cast<T*>(*data);
                std::cout << aux->i << std::endl;
                std::cout << aux->d << std::endl;
            }
        }

/* Same but using references: */
        void castAndPrint2( void*& data ){
            if( data != nullptr ){
                T* aux = static_cast<T*>(data);
                std::cout << aux->i << std::endl;
                std::cout << aux->d << std::endl;
            }
        }

    void setFFIvalueElement( void*& data, const std::string& typeName, int pos, std::shared_ptr< void* >& ffiValArr ){
            if( data != nullptr ){
                T* aux = static_cast<T*>(data);
		ffiValArr.get()[pos] = aux;
               // std::cout << aux->i << std::endl;
               // std::cout << aux->d << std::endl;
            }
	}

    };
    
    struct CastersRegistry{
            CastersRegistry(const CastersRegistry&) = delete;
            CastersRegistry(CastersRegistry&&) noexcept = delete;
            CastersRegistry& operator=(const CastersRegistry&) = delete;
            CastersRegistry& operator=(CastersRegistry&&) noexcept = delete;

            static void addCaster( const std::string& typeName, std::shared_ptr< CasterBase > casterPtr ){
                    auto& casters = getCasters();
                    casters.insert( { typeName, casterPtr } ); 
            }
            
            static std::shared_ptr< CasterBase > getCaster( const std::string& typeName ){
                auto& casters = getCasters();
                auto it = casters.find(typeName);
                if( it != casters.end() )
                    return it->second;
                throw;
            }
            
        private:
            CastersRegistry(){}
            std::unordered_map< std::string, std::shared_ptr< CasterBase > > casters;
            /* Exploits polymorphism for producing the right casting given the type name*/
            static std::unordered_map< std::string, std::shared_ptr< CasterBase > >& getCasters() {
                static CastersRegistry reg{};
                return reg.casters;
            }
         /*   static std::unordered_map< std::string, std::function<void(void*)> >& getPrinters() {
                static std::unordered_map< std::string, std::function<void(void*)> > printers;
                return printers;
            }
*/
    };



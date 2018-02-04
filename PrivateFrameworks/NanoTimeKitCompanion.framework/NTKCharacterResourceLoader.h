/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterResourceLoader : NSObject {
    NSMutableArray * _array;
    NSMutableArray * _arrayByLocale;
    NSBundle * _bundle;
    unsigned long long  _clients;
    CLKUIMmapFile * _commonBankArab;
    CLKUIMmapFile * _commonBankLatn;
    EAGLContext * _context;
    NSMutableDictionary * _mapping;
    CLKUIMmapFile * _mickeyBank;
    CLKUIMmapFile * _minnieBank;
    struct NTKCharacterPrograms { 
        struct NUProgram { 
            unsigned int program; 
            int uniforms[11]; 
        } programs[6]; 
    }  _programs;
}

@property (nonatomic, readonly) EAGLContext *context;

+ (void)_deallocInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (id)_loadBank:(id)arg1 toArrays:(unsigned long long)arg2 allowNewKeys:(bool)arg3;
- (void)_loadPrograms;
- (void)_loadTextures;
- (void)addClient;
- (void)bindProgram:(unsigned long long)arg1;
- (void)bindTexture:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)init;
- (void)localeChanged;
- (void)prime;
- (unsigned int)programUniformLocation:(unsigned long long)arg1 uniform:(int)arg2;
- (void)removeClient;
- (id)textureWithName:(id)arg1;
- (id)textureWithName:(id)arg1 prefix:(id)arg2;

@end

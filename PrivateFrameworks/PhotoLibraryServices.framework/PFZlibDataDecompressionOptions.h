/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFZlibDataDecompressionOptions : NSObject {
    id /* block */  _createBuffer;
    bool  _decompressAllAtOnce;
    id /* block */  _growData;
    int  _windowBits;
}

@property (nonatomic, copy) id /* block */ createBuffer;
@property (nonatomic) bool decompressAllAtOnce;
@property (nonatomic, copy) id /* block */ growData;
@property (nonatomic) int windowBits;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id /* block */)createBuffer;
- (bool)decompressAllAtOnce;
- (id /* block */)growData;
- (void)setCreateBuffer:(id /* block */)arg1;
- (void)setDecompressAllAtOnce:(bool)arg1;
- (void)setGrowData:(id /* block */)arg1;
- (void)setWindowBits:(int)arg1;
- (int)windowBits;

@end

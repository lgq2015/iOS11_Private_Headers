/* made by EzioChiu.
 */

@protocol MemoryOwner <NSObject>

@required

- (void)_testPregenerateWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (PHAssetCollection *)createPHMemory;
- (MiroMemory *)memory;
- (void)setMemory:(MiroMemory *)arg1;

@end

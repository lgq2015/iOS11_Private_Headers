/* made by EzioChiu.
 */

@protocol NFCISO15693Tag <NFCTag>

@required

- (unsigned long long)icManufacturerCode;
- (NSData *)icSerialNumber;
- (NSData *)identifier;
- (void)readMultipleBlocksWithConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NFCISO15693ReadMultipleBlocksConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)sendCustomCommandWithConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NFCISO15693CustomCommandConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end

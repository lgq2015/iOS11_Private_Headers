/* made by EzioChiu.
 */

@protocol CDPDRecoveryKeyValidatorInternalDelegate <NSObject>

@required

- (void)enableBackupWithRecoveryKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSString *)generateRecoveryKeyWithInfo:(NSDictionary *)arg1 error:(id*)arg2;

@end

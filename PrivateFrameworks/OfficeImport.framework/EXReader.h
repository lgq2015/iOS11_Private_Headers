/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXReader : OCXReader {
    NSString * mTemporaryDirectory;
}

@property (nonatomic, retain) NSString *temporaryDirectory;

- (void)dealloc;
- (id)defaultPassphrase;
- (id)read;
- (void)setTemporaryDirectory:(id)arg1;
- (id)temporaryDirectory;

@end

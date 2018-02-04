/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCNamedData : NSObject {
    NSData * mData;
    NSString * mName;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *name;

+ (id)namedDataWithData:(id)arg1 named:(id)arg2;

- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1 named:(id)arg2;
- (id)name;

@end

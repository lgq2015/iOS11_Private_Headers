/* made by EzioChiu.
 */

@protocol NFTag <NSObject>

@required

- (NSData *)AppData;
- (NSData *)IDm;
- (NSData *)PMm;
- (NSData *)SystemCode;
- (NSData *)UID;
- (NSArray *)allSystemCodes;
- (NSString *)description;
- (id)initWithNFTag:(id <NFTag>)arg1;
- (NSData *)tagID;
- (unsigned int)technology;
- (unsigned int)type;

@end

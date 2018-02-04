/* made by EzioChiu.
 */

@protocol PLPhotoEditDataImporter <NSObject>

@required

+ (bool)canInterpretDataWithFormatIdentifier:(NSString *)arg1 formatVersion:(NSString *)arg2;
+ (NSDictionary *)debugDescriptionForPhotoEditData:(NSData *)arg1 formatIdentifier:(NSString *)arg2 formatVersion:(NSString *)arg3;
+ (bool)loadPhotoEditData:(NSData *)arg1 formatIdentifier:(NSString *)arg2 formatVersion:(NSString *)arg3 intoModel:(PLPhotoEditMutableModel *)arg4 importProperties:(PLPhotoEditImportProperties *)arg5;

@end

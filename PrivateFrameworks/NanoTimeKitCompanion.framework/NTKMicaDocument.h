/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKMicaDocument : NSObject {
    NSURL * _fileURL;
    NSDate * _lastSaveDate;
    NSString * _name;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSDate *lastSaveDate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, readonly) NSString *thumbnailImageCacheKey;

+ (id)documentWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)fileURL;
- (bool)isEqual:(id)arg1;
- (id)lastSaveDate;
- (id)name;
- (id)thumbnailImage;
- (id)thumbnailImageCacheKey;

@end

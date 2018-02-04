/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttachment : EKObject

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSString *fileFormat;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) bool isBinary;
@property (nonatomic, readonly) NSURL *localURL;

+ (Class)frozenClass;

- (id)URL;
- (id)UUID;
- (id)XPropertiesData;
- (long long)compareFileNames:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)externalId;
- (id)fileFormat;
- (id)fileName;
- (id)fileNameRaw;
- (id)fileSize;
- (id)fileSizeRaw;
- (bool)isBinary;
- (id)localURL;
- (void)setExternalId:(id)arg1;
- (void)setFileFormat:(id)arg1;
- (void)setFileNameRaw:(id)arg1;
- (void)setFileSizeRaw:(id)arg1;
- (void)setIsBinary:(bool)arg1;
- (void)setLocalURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setXPropertiesData:(id)arg1;

@end

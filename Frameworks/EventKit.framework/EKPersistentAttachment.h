/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAttachment : EKPersistentObject

+ (id)relations;

- (id)URL;
- (id)UUID;
- (id)XPropertiesData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (id)externalId;
- (id)fileFormat;
- (id)fileName;
- (id)fileSize;
- (bool)isBinary;
- (id)localURL;
- (void)setExternalId:(id)arg1;
- (void)setFileFormat:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setIsBinary:(bool)arg1;
- (void)setLocalURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setXPropertiesData:(id)arg1;

@end
/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKExportMetadata : NSObject {
    NSUUID * _exportUUID;
    NSDate * _exportedAt;
    NSSet * _operations;
}

@property (nonatomic, readonly) NSUUID *exportUUID;
@property (nonatomic, readonly) NSDate *exportedAt;
@property (nonatomic, readonly) NSSet *operations;

- (id)exportUUID;
- (id)exportedAt;
- (id)operations;

@end
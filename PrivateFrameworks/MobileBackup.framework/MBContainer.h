/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBContainer : NSObject <NSCopying> {
    NSMutableDictionary * _plist;
}

@property (nonatomic, retain) NSString *containerDir;
@property (nonatomic, readonly) int containerType;
@property (nonatomic, readonly) NSString *containerTypeString;
@property (nonatomic, retain) NSDate *datePlacedInSafeHarbor;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isSystemContainer;
@property (nonatomic, readonly) bool isSystemSharedContainer;
@property (getter=isSafeHarbor, nonatomic, readonly) bool safeHarbor;
@property (nonatomic, readonly) NSString *safeHarborDir;

+ (id)containerWithDomainName:(id)arg1;
+ (id)containerWithPropertyList:(id)arg1;

- (id)containerDir;
- (int)containerType;
- (id)containerTypeString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datePlacedInSafeHarbor;
- (void)dealloc;
- (id)domain;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithPropertyList:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSafeHarbor;
- (bool)isSystemContainer;
- (bool)isSystemSharedContainer;
- (id)propertyListForBackupProperties;
- (id)propertyListForSafeHarborInfo;
- (id)safeHarborDir;
- (void)setContainerDir:(id)arg1;
- (void)setDatePlacedInSafeHarbor:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDMigrationRequestOptions : ASDRequestOptions {
    unsigned long long  _migrationType;
}

@property (nonatomic, readonly) unsigned long long migrationType;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMigrationType:(unsigned long long)arg1;
- (unsigned long long)migrationType;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKReporterAttributes : NSObject <DKExtensionAttributes, NSCopying> {
    struct NSString { Class x1; } * _bundleIdentifier;
    NSExtension * _extension;
    bool  _headless;
    struct NSSet { Class x1; } * _manifest;
    struct NSString { Class x1; } * _name;
    NSUUID * _uuid;
    struct NSString { Class x1; } * _version;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSExtension *extension;
@property (getter=isHeadless, nonatomic, readonly) bool headless;
@property (nonatomic, readonly) NSSet *manifest;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (void)_validateAndAddDomain:(struct NSString { Class x1; }*)arg1 withInfo:(struct NSDictionary { Class x1; }*)arg2 toManifest:(struct NSMutableSet { Class x1; }*)arg3;
- (void)_validateAndAddExtensionManifest:(struct NSDictionary { Class x1; }*)arg1 toManifest:(struct NSMutableSet { Class x1; }*)arg2;
- (struct NSString { Class x1; }*)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extension;
- (unsigned long long)hash;
- (id)initWithExtension:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReportGeneratorAttributes:(id)arg1;
- (bool)isHeadless;
- (struct NSSet { Class x1; }*)manifest;
- (struct NSString { Class x1; }*)name;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (struct NSString { Class x1; }*)version;

@end
/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSourceRevision : NSObject {
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _operatingSystemVersion;
    NSString * _productType;
    HDSourceEntity * _sourceEntity;
    NSString * _version;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) HDSourceEntity *sourceEntity;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg4;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (id)productType;
- (id)sourceEntity;
- (id)version;

@end

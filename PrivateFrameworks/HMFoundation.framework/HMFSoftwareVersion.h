/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFSoftwareVersion : HMFVersion {
    NSString * _buildVersion;
}

@property (readonly, copy) NSString *buildVersion;

+ (bool)supportsSecureCoding;
+ (id)versionFromOperatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg1;

- (void).cxx_destruct;
- (id)buildVersion;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 buildVersion:(id)arg4;
- (id)initWithVersionString:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (id)versionString;

@end
/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVersion : NSObject {
    long long  _major;
    long long  _minor;
}

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (bool)isValidVersionString:(id)arg1 error:(out id*)arg2;
+ (bool)isValidVersionString:(id)arg1 error:(out id*)arg2 major:(id*)arg3 minor:(id*)arg4;
+ (id)regularExpression;
+ (id)versionOne;
+ (id)versionWithString:(id)arg1 error:(out id*)arg2;
+ (id)versionZero;

- (long long)compare:(id)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMajor:(long long)arg1 minor:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVersion:(id)arg1;
- (long long)major;
- (long long)minor;
- (id)stringRepresentation;

@end

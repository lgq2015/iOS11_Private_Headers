/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUIdentifier : NSObject <NSCopying> {
    NSString * _name;
    NSString * _nameSpace;
    NUVersion * _version;
}

@property (readonly) NSString *name;
@property (readonly) NSString *nameSpace;
@property (readonly) NSString *stringRepresentation;
@property (readonly) NUVersion *version;

+ (id)defaultNameSpace;
+ (id)identifierRegularExpression;
+ (id)identifierWithString:(id)arg1 error:(out id*)arg2;
+ (id)latestIdentifierWithName:(id)arg1;
+ (id)latestIdentifierWithNameSpace:(id)arg1 name:(id)arg2;
+ (id)validNameRegularExpression;
+ (id)validNameSpaceRegularExpression;
+ (bool)validateIdentifierString:(id)arg1 error:(out id*)arg2;
+ (bool)validateIdentifierString:(id)arg1 space:(out id*)arg2 name:(out id*)arg3 version:(out id*)arg4 error:(out id*)arg5;
+ (bool)validateName:(id)arg1 error:(out id*)arg2;
+ (bool)validateNameSpace:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)identifierWithVersion:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 version:(id)arg2;
- (id)initWithNameSpace:(id)arg1 name:(id)arg2 version:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentifier:(id)arg1;
- (id)name;
- (id)nameSpace;
- (id)stringRepresentation;
- (id)version;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUSourceSchema : NUSchema

+ (id)identifier;
+ (id)requiredAttributes;
+ (id)supportedAttributes;

- (id)copy:(id)arg1;
- (id)deserialize:(id)arg1 error:(out id*)arg2;
- (id)deserializeAssetIdentifierFromDictionary:(id)arg1 error:(out id*)arg2;
- (id)deserializeSource:(id)arg1 error:(out id*)arg2;
- (id)identifier;
- (id)init;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3;
- (struct NSArray { Class x1; }*)schemaDependencies;
- (id)serialize:(id)arg1 error:(out id*)arg2;
- (bool)serializeAssetIdentifier:(id)arg1 intoDictionary:(id)arg2 error:(out id*)arg3;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (id)serializeSource:(id)arg1 error:(out id*)arg2;
- (long long)type;
- (bool)validate:(id)arg1 error:(out id*)arg2;
- (bool)validateSource:(id)arg1 error:(out id*)arg2;

@end

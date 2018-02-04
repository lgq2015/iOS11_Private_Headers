/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUCompositionSchema : NUSchema {
    struct NSDictionary { Class x1; } * _contents;
    NSSet * _requiredContents;
}

@property (nonatomic, readonly) NSDictionary *contents;
@property (nonatomic, readonly) NSSet *requiredContents;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)supportedAttributes;

- (void).cxx_destruct;
- (struct NSDictionary { Class x1; }*)contents;
- (id)copy:(id)arg1;
- (id)copyComposition:(id)arg1;
- (id)deserialize:(id)arg1 error:(out id*)arg2;
- (id)deserializeComposition:(id)arg1 error:(out id*)arg2;
- (bool)deserializeContents:(id)arg1 fromDictionary:(id)arg2 error:(out id*)arg3;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (id)initWithIdentifier:(id)arg1 contents:(struct NSDictionary { Class x1; }*)arg2 attributes:(id)arg3;
- (bool)isValid:(out id*)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3;
- (id)modelForProperty:(id)arg1;
- (id)requiredContents;
- (struct NSArray { Class x1; }*)schemaDependencies;
- (id)serialize:(id)arg1 error:(out id*)arg2;
- (id)serializeComposition:(id)arg1 error:(out id*)arg2;
- (bool)serializeContents:(id)arg1 intoDictionary:(id)arg2 error:(out id*)arg3;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (long long)type;
- (bool)validate:(id)arg1 error:(out id*)arg2;
- (bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3;
- (bool)validateComposition:(id)arg1 error:(out id*)arg2;
- (bool)validateContents:(out id*)arg1;
- (bool)validateContents:(id)arg1 error:(out id*)arg2;
- (bool)validatePropertyArray:(id)arg1 error:(out id*)arg2;

@end

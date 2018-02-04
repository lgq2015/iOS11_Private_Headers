/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKInfinityListingAttributes : NSObject {
    NSMutableDictionary * _attributes;
}

@property (nonatomic, retain) NSMutableDictionary *attributes;

+ (id)attributesWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributes;
- (id)colorForKey:(id)arg1;
- (bool)containsAttributes:(id)arg1 ignoreKeys:(id)arg2;
- (id)debugDescription;
- (id)description;
- (void)setAttributes:(id)arg1;

@end

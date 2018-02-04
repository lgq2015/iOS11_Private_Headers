/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKXMLExtractorElement : NSObject {
    NSDictionary * _specificationAttributes;
    NSString * _specificationElement;
}

@property (readonly) NSDictionary *specificationAttributes;
@property (readonly) NSString *specificationElement;

- (void).cxx_destruct;
- (id)initWithElementName:(id)arg1 attributes:(id)arg2;
- (id)initWithTagSpecification:(id)arg1;
- (bool)matchesElement:(id)arg1;
- (id)specificationAttributes;
- (id)specificationElement;

@end

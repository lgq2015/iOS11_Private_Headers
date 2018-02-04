/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKXMLExtractorSpecification : NSObject {
    NSArray * _specificationElements;
    NSString * _specificationString;
}

@property (readonly) NSArray *specificationElements;
@property (readonly) NSString *specificationString;

- (void).cxx_destruct;
- (id)initWithSpecificationString:(id)arg1;
- (bool)matchesElementStack:(id)arg1;
- (id)specificationElements;
- (id)specificationString;

@end

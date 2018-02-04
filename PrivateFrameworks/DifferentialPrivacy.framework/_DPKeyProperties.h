/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPKeyProperties : NSObject {
    NSNumber * _acceptableError;
    _DPPrivacyBudget * _budget;
    unsigned long long  _dataAlgorithm;
    unsigned long long  _fragmentCount;
    unsigned long long  _fragmentWidth;
    bool  _keyPatternsAllowed;
    NSString * _noiseDistribution;
    NSDictionary * _parameterDictionary;
    _DPValueRange * _possibleRange;
    NSNumber * _privacyParameter;
    unsigned long long  _privatizationAlgorithm;
    NSString * _propertiesName;
    NSString * _serverAlgorithmString;
    unsigned long long  _submissionPriority;
    unsigned long long  _transport;
    _DPValueRange * _trimmedScale;
}

@property (nonatomic, readonly) NSNumber *acceptableError;
@property (nonatomic, readonly) _DPPrivacyBudget *budget;
@property (nonatomic, readonly) unsigned long long dataAlgorithm;
@property (nonatomic, readonly) unsigned long long fragmentCount;
@property (nonatomic, readonly) unsigned long long fragmentWidth;
@property (nonatomic, readonly) bool keyPatternsAllowed;
@property (nonatomic, readonly, copy) NSString *noiseDistribution;
@property (nonatomic, readonly) NSDictionary *parameterDictionary;
@property (nonatomic, readonly) _DPValueRange *possibleRange;
@property (nonatomic, readonly) NSNumber *privacyParameter;
@property (nonatomic, readonly) unsigned long long privatizationAlgorithm;
@property (nonatomic, readonly, copy) NSString *propertiesName;
@property (nonatomic, readonly, copy) NSString *serverAlgorithmString;
@property (nonatomic, readonly) unsigned long long submissionPriority;
@property (nonatomic, readonly) unsigned long long transport;
@property (nonatomic, readonly) _DPValueRange *trimmedScale;

+ (void)initialize;
+ (id)keyPropertiesForName:(id)arg1;
+ (id)keyPropertiesFromDictionary:(id)arg1;
+ (id)propertiesFromFile:(id)arg1;

- (void).cxx_destruct;
- (id)acceptableError;
- (id)budget;
- (unsigned long long)dataAlgorithm;
- (id)description;
- (unsigned long long)fragmentCount;
- (unsigned long long)fragmentWidth;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)keyPatternsAllowed;
- (id)noiseDistribution;
- (id)parameterDictionary;
- (id)possibleRange;
- (id)privacyParameter;
- (unsigned long long)privatizationAlgorithm;
- (id)privatizationAlgorithmString;
- (id)propertiesName;
- (id)serverAlgorithmString;
- (unsigned long long)submissionPriority;
- (unsigned long long)transport;
- (id)trimmedScale;

@end

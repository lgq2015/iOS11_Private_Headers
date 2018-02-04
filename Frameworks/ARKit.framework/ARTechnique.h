/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARTechnique : NSObject <ARTechniqueDelegate> {
    <ARTechniqueDelegate> * _delegate;
    unsigned long long  _powerUsage;
    NSArray * _techniques;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARTechniqueDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *techniques;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTechniques:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)powerUsage;
- (id)processData:(id)arg1;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (void)setDelegate:(id)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)setTechniques:(id)arg1;
- (void)technique:(id)arg1 didFailWithError:(id)arg2;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;
- (id)techniques;

@end

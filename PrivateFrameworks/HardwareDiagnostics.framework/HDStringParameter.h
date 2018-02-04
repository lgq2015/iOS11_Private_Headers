/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
 */

@interface HDStringParameter : NSObject <HDParameterDescription> {
    bool  _required;
    NSString * _summary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool required;
@property (nonatomic, retain) NSString *summary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSummary:(id)arg1 required:(bool)arg2;
- (bool)required;
- (void)setRequired:(bool)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;
- (bool)validateValue:(id)arg1 error:(id*)arg2;

@end

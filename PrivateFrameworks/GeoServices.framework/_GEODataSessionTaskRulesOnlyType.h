/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEODataSessionTaskRulesOnlyType : _GEODataSessionTaskRulesHelper {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

- (bool)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3;
- (bool)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3;
- (id)initForType:(unsigned long long)arg1;
- (unsigned long long)type;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGReverseTemplatesJSDataDetectors : NSObject {
    NSDateFormatter * _dateFormatter;
    NSDateFormatter * _naiveDateFormatter;
    NSDateFormatter * _noTimeFormatter;
    NSMutableDictionary * _scanners;
}

- (void).cxx_destruct;
- (id)_result:(struct __DDResult { }*)arg1 containsTypes:(id)arg2;
- (void)_result:(struct __DDResult { }*)arg1 containsTypes:(id)arg2 foundTypes:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)runDataDetectors:(id)arg1 locale:(id)arg2 epoch:(double)arg3 metadataForTypes:(id)arg4;

@end

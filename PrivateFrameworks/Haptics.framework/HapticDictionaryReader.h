/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
 */

@interface HapticDictionaryReader : NSObject

- (bool)parse:(id)arg1 outEventArray:(id*)arg2 outParamArray:(id*)arg3 error:(id*)arg4;
- (id)parseEvent:(id)arg1 error:(id*)arg2;
- (id)parseEventParams:(id)arg1;
- (id)parseParam:(id)arg1 error:(id*)arg2;

@end

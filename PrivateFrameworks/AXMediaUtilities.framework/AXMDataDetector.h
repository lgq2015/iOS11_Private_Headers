/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMDataDetector : NSObject {
    NSRegularExpression * _emailAddressRegex;
    AXMSpeechFormatterCache * _speechFormatterCache;
}

- (void).cxx_destruct;
- (void)_enumerateText:(id)arg1 regularExpression:(id)arg2 datatype:(unsigned long long)arg3 withBlock:(id /* block */)arg4;
- (void)_enumerateText:(id)arg1 textCheckingType:(unsigned long long)arg2 datatype:(unsigned long long)arg3 withBlock:(id /* block */)arg4;
- (id)emailAddressRegex;
- (void)enumerateText:(id)arg1 searchingFordatatypes:(id)arg2 withBlock:(id /* block */)arg3;
- (id)initWithSpeechFormatterCache:(id)arg1;

@end

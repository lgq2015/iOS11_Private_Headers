/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFUserPromptOperation : WFOperation {
    NSDictionary * _options;
    long long  _result;
    double  _timeout;
}

@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic) long long result;
@property (nonatomic) double timeout;

+ (id)sharedMapTable;

- (void).cxx_destruct;
- (void)_notification:(struct __CFUserNotification { }*)arg1 didFinishWithResponse:(unsigned long long)arg2;
- (void)_showPrompt;
- (id)initWithOptions:(id)arg1 timeout:(double)arg2;
- (id)options;
- (long long)result;
- (void)setOptions:(id)arg1;
- (void)setResult:(long long)arg1;
- (void)setTimeout:(double)arg1;
- (void)start;
- (double)timeout;

@end

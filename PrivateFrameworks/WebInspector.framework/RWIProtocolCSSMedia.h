/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSMedia : RWIProtocolJSONObject

@property (nonatomic) long long source;
@property (nonatomic) int sourceLine;
@property (nonatomic, copy) NSString *sourceURL;
@property (nonatomic, copy) NSString *text;

- (id)initWithText:(id)arg1 source:(long long)arg2;
- (void)setSource:(long long)arg1;
- (void)setSourceLine:(int)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setText:(id)arg1;
- (long long)source;
- (int)sourceLine;
- (id)sourceURL;
- (id)text;

@end

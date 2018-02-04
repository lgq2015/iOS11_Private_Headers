/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSignificantTimeEventBuilder : HFEventBuilder <HFTimeEventBuilder> {
    NSString * _significantEvent;
    NSDateComponents * _significantEventOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *significantEvent;
@property (nonatomic, copy) NSDateComponents *significantEventOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildNewEventFromCurrentState;
- (id)description;
- (id)initWithEvent:(id)arg1;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3;
- (id)performValidation;
- (void)setSignificantEvent:(id)arg1;
- (void)setSignificantEventOffset:(id)arg1;
- (id)significantEvent;
- (id)significantEventOffset;

@end

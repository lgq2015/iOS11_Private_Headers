/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalSpotlightQueryResult : NSObject {
    NSString * _identifier;
    bool  _naturalLanguageSuggestedEvent;
    NSString * _title;
}

@property (retain) NSString *identifier;
@property (getter=isNaturalLanguageSuggestedEvent, nonatomic) bool naturalLanguageSuggestedEvent;
@property (retain) NSString *title;

- (void).cxx_destruct;
- (id)identifier;
- (bool)isNaturalLanguageSuggestedEvent;
- (void)setIdentifier:(id)arg1;
- (void)setNaturalLanguageSuggestedEvent:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

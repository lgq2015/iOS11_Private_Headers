/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAARAlternativeResultsView : SAAceView

@property (nonatomic, copy) NSString *dialogIdentifier;
@property (nonatomic) long long rank;
@property (nonatomic, retain) SAUIAddViews *resultView;
@property (nonatomic) bool suggestedResult;
@property (nonatomic, copy) NSString *utterance;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)alternativeResultsView;
+ (id)alternativeResultsViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)dialogIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)rank;
- (id)resultView;
- (void)setDialogIdentifier:(id)arg1;
- (void)setRank:(long long)arg1;
- (void)setResultView:(id)arg1;
- (void)setSuggestedResult:(bool)arg1;
- (void)setUtterance:(id)arg1;
- (bool)suggestedResult;
- (id)utterance;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;

@end

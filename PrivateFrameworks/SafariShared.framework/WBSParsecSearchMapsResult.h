/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSearchMapsResult : WBSParsecSearchResult <WBSParsecSearchMapsResultFeedbackSenderClient, WBSParsecSearchResultPresentedInCard> {
    WBSParsecSearchMapsResultExtraCompletionItem * _extraCompletionItem;
    WBSParsecSearchResult * _hiddenParsecResult;
    NSString * _mapsDataType;
    WBSParsecSearchMapsResultFeedbackSender * _mapsFeedbackSender;
    NSString * _mapsResultType;
    NSURL * _moreURL;
    NSString * _nearbyBusinessesString;
    <WBSParsecSearchSession> * _parsecSearchSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WBSParsecSearchMapsResultExtraCompletionItem *extraCompletionItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSParsecSearchResult *hiddenParsecResult;
@property (nonatomic, retain) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;
@property (nonatomic, readonly) NSString *mapsResultType;
@property (nonatomic, readonly) NSURL *moreURL;
@property (nonatomic, readonly) NSString *nearbyBusinessesString;
@property (nonatomic, retain) <WBSParsecSearchSession> *parsecSearchSession;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool willPresentResultInCard;

- (void).cxx_destruct;
- (void)didDisplayMapsResultForQuery:(id)arg1;
- (id)extraCompletionItem;
- (id)hiddenParsecResult;
- (id)initWithDictionary:(id)arg1;
- (id)mapsFeedbackSender;
- (id)mapsResultType;
- (id)moreURL;
- (id)nearbyBusinessesString;
- (id)parsecSearchSession;
- (void)setHiddenParsecResult:(id)arg1;
- (void)setMapsFeedbackSender:(id)arg1;
- (void)setParsecSearchSession:(id)arg1;
- (id)supportedStyleOverrides;
- (bool)willPresentResultInCard;

@end

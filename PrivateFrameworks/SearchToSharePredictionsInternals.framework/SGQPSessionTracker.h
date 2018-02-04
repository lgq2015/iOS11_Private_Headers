/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPSessionTracker : NSObject {
    PMLAWDSessionTracker * _awdSessionTracker;
    NSDictionary * _categoryMap;
    NSString * _language;
    PMLSessionDescriptor * _sessionDescriptor;
    SGQPSettings * _settings;
    <PMLTrainingProtocol> * _training;
    PMLHashingVectorizer * _vectorizer;
}

+ (bool)_isAppleInternalConversation:(id)arg1;
+ (id)_normalizeSearchQueryIntoCategory:(id)arg1;
+ (id)trackerFromAsset:(id)arg1 withTraining:(id)arg2;

- (void).cxx_destruct;
- (void)_trackRawSession:(id)arg1 label:(unsigned long long)arg2 locale:(id)arg3 isInternalConversation:(bool)arg4;
- (id)initWithAWDTracker:(id)arg1 settings:(id)arg2 training:(id)arg3 categoryPhraseMap:(id)arg4 language:(id)arg5;
- (void)relabelOldSessions;
- (void)trackSessionInConversation:(id)arg1 withMessages:(id)arg2 engagedCategory:(id)arg3;

@end

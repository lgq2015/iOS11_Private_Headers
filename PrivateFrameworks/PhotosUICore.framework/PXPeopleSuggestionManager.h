/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleSuggestionManager : NSObject {
    unsigned long long  _autoConfirmationsCount;
    unsigned int  _confirmNoSoundID;
    unsigned int  _confirmYesSoundID;
    NSMutableSet * _confirmedSuggestions;
    <PXPeopleSuggestionManagerDataSource> * _dataSource;
    <PXPeopleSuggestionManagerDelegate> * _delegate;
    bool  _didReachEnd;
    bool  _mute;
    <PXPerson> * _person;
    NSMutableSet * _rejectedSuggestions;
    NSMutableSet * _skippedSuggestions;
    PXPeoplePagingSuggestionProvider * _suggestionProvider;
    PXSuggestionToken * _suggestionToken;
    unsigned long long  _userConfirmationsCount;
}

@property (nonatomic) unsigned long long autoConfirmationsCount;
@property (nonatomic, readonly) bool canUndo;
@property (nonatomic) unsigned int confirmNoSoundID;
@property (nonatomic) unsigned int confirmYesSoundID;
@property (nonatomic, retain) NSMutableSet *confirmedSuggestions;
@property (nonatomic, readonly) NSArray *currentSuggestions;
@property (nonatomic, retain) <PXPeopleSuggestionManagerDataSource> *dataSource;
@property (nonatomic) <PXPeopleSuggestionManagerDelegate> *delegate;
@property (nonatomic) bool didReachEnd;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic) bool mute;
@property (nonatomic, retain) <PXPerson> *person;
@property (nonatomic, retain) NSMutableSet *rejectedSuggestions;
@property (nonatomic, retain) NSMutableSet *skippedSuggestions;
@property (nonatomic, retain) PXPeoplePagingSuggestionProvider *suggestionProvider;
@property (nonatomic, retain) PXSuggestionToken *suggestionToken;
@property (nonatomic) unsigned long long userConfirmationsCount;

- (void).cxx_destruct;
- (bool)_fetchingSuggestions;
- (void)_loadMoreSuggestionsWithCompletion:(id /* block */)arg1;
- (id)_nonSkippedSuggestionsForSuggestions:(id)arg1;
- (void)_notifyDelegateWeHaveMoreSuggestions:(bool)arg1;
- (void)_playConfirmNoSound;
- (void)_playConfirmYesSound;
- (unsigned int)_soundIdWithFilename:(id)arg1;
- (unsigned long long)autoConfirmationsCount;
- (bool)canUndo;
- (void)cancelPendingSuggestionLoading;
- (void)commitUserResponses;
- (id)commitUserResponsesToPerson:(id)arg1;
- (unsigned int)confirmNoSoundID;
- (unsigned int)confirmYesSoundID;
- (id)confirmedSuggestions;
- (id)currentSuggestions;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (bool)didReachEnd;
- (id)init;
- (id)initWithPerson:(id)arg1;
- (bool)isLoading;
- (bool)isSuggestionConfirmed:(id)arg1;
- (void)markSuggestions:(id)arg1 confirmed:(bool)arg2;
- (void)markSuggestionsAsSkipped:(id)arg1;
- (bool)mute;
- (id)person;
- (void)preloadSounds;
- (id)rejectedSuggestions;
- (void)requestNextSuggestion;
- (void)requestNextSuggestionsWithPageLimit:(unsigned long long)arg1;
- (void)setAutoConfirmationsCount:(unsigned long long)arg1;
- (void)setConfirmNoSoundID:(unsigned int)arg1;
- (void)setConfirmYesSoundID:(unsigned int)arg1;
- (void)setConfirmedSuggestions:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidReachEnd:(bool)arg1;
- (void)setMute:(bool)arg1;
- (void)setPerson:(id)arg1;
- (void)setRejectedSuggestions:(id)arg1;
- (void)setSkippedSuggestions:(id)arg1;
- (void)setSuggestionProvider:(id)arg1;
- (void)setSuggestionToken:(id)arg1;
- (void)setUserConfirmationsCount:(unsigned long long)arg1;
- (id)skippedSuggestions;
- (id)suggestionProvider;
- (id)suggestionToken;
- (void)undo;
- (unsigned long long)userConfirmationsCount;

@end

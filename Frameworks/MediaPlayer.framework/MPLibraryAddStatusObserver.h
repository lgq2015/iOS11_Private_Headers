/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPLibraryAddStatusObserver : NSObject {
    struct MPLibraryAddStatusObserverConfiguration { 
        bool isValidContentType; 
        bool isLibraryAdded; 
        bool hasCleanContent; 
        bool hasExplicitContent; 
        bool isLibraryAddEligible; 
    }  _configuration;
    unsigned long long  _currentStatus;
    MPModelObject * _identifyingModelObject;
    bool  _needsStatusUpdate;
    id /* block */  _statusBlock;
}

@property (nonatomic, readonly) struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; } configuration;
@property (nonatomic, readonly) unsigned long long currentStatus;
@property (nonatomic, readonly) MPModelObject *identifyingModelObject;
@property (nonatomic, copy) id /* block */ statusBlock;

- (void).cxx_destruct;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (unsigned long long)_calculateCurrentStatus;
- (void)_cloudLibraryEnabledDidChangeNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_transientStateDidChangeNotification:(id)arg1;
- (void)_updateCurrentStatus;
- (void)_updateInProgressDidChangeNotification:(id)arg1;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })configuration;
- (void)configureWithModelObject:(id)arg1;
- (unsigned long long)currentStatus;
- (void)dealloc;
- (id)identifyingModelObject;
- (id)init;
- (void)setConfiguration:(struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })arg1 identifyingModelObject:(id)arg2;
- (void)setStatusBlock:(id /* block */)arg1;
- (id /* block */)statusBlock;

@end

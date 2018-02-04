/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLSleepAssertionManager : NSObject {
    long long  m_assertionCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  m_assertionLock;
    NSObject<OS_dispatch_semaphore> * m_assertionSemaphore;
    long long  m_idleCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  m_idleLock;
    bool  m_waiting;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)releaseIdleAssertion;
- (void)releaseSleepAssertion;
- (void)takeIdleAssertion;
- (void)takeSleepAssertion;
- (void)waitForOutstandingSleepAssertions;

@end

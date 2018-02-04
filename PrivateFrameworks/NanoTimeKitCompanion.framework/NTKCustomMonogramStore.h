/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCustomMonogramStore : NSObject {
    NPSManager * _npsManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_customMonogramFromPrefs;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
- (id)customMonogram;
- (void)dealloc;
- (id)init;
- (void)setCustomMonogram:(id)arg1;

@end

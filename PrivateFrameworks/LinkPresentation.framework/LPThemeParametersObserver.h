/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPThemeParametersObserver : NSObject {
    NSHashTable * _clients;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (void)dealloc;
- (void)didChangeContentSizeCategory:(id)arg1;
- (void)didChangeDarkenColorsStatus:(id)arg1;
- (void)didChangeThemeParameters;
- (id)init;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRSFCardLoader : NSObject {
    NSCache * _loadedCards;
}

+ (id)sharedLoader;

- (void).cxx_destruct;
- (id)init;
- (void)loadSFCard:(id)arg1 completion:(id /* block */)arg2;

@end

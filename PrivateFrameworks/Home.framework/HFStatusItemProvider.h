/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFStatusItemProvider : HFStaticItemProvider {
    HMHome * _home;
    HMRoom * _room;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMRoom *room;

+ (id)_statusItemClasses;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)initWithItems:(id)arg1;
- (id)room;

@end

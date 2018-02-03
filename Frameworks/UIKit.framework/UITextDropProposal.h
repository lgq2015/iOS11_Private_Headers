/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextDropProposal : UIDropProposal <NSCopying> {
    unsigned long long  _dropAction;
    unsigned long long  _dropPerformer;
    unsigned long long  _dropProgressMode;
    bool  _useFastSameViewOperations;
}

@property (nonatomic) unsigned long long dropAction;
@property (nonatomic) unsigned long long dropPerformer;
@property (nonatomic) unsigned long long dropProgressMode;
@property (nonatomic) bool useFastSameViewOperations;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dropAction;
- (unsigned long long)dropPerformer;
- (unsigned long long)dropProgressMode;
- (id)initWithDropOperation:(unsigned long long)arg1;
- (void)setDropAction:(unsigned long long)arg1;
- (void)setDropPerformer:(unsigned long long)arg1;
- (void)setDropProgressMode:(unsigned long long)arg1;
- (void)setUseFastSameViewOperations:(bool)arg1;
- (bool)useFastSameViewOperations;

@end
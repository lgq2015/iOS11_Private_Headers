/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface _FBMapResult : NSObject {
    bool  _created;
    bool  _filtered;
    id  _result;
}

@property (nonatomic) bool created;
@property (nonatomic) bool filtered;
@property (nonatomic, retain) id result;

- (bool)created;
- (void)dealloc;
- (bool)filtered;
- (id)result;
- (void)setCreated:(bool)arg1;
- (void)setFiltered:(bool)arg1;
- (void)setResult:(id)arg1;

@end

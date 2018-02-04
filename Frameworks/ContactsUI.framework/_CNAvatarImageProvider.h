/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface _CNAvatarImageProvider : NSObject <CNAvatarImageProvider> {
    <CNUIPRLikenessProvider> * _likenessProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUIPRLikenessProvider> *likenessProvider;
@property (readonly) Class superclass;

+ (id)roundImage:(id)arg1;

- (void).cxx_destruct;
- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 style:(unsigned long long)arg3;
- (id)initWithLikenessProvider:(id)arg1;
- (id)likenessProvider;

@end

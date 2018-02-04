/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface _ICQFollowupSpecification : NSObject {
    NSString * _altMessage;
    NSString * _altNoteMessage;
    bool  _forAccountGroup;
    NSArray * _links;
    NSString * _message;
    ICQLink * _noteActivateLink;
    ICQLink * _noteClearLink;
    ICQLink * _noteDismissLink;
    NSString * _noteMessage;
    NSString * _noteTitle;
    NSDictionary * _serverDict;
    NSString * _title;
}

@property (nonatomic, retain) NSString *altMessage;
@property (nonatomic, retain) NSString *altNoteMessage;
@property (getter=isForAccountGroup, nonatomic) bool forAccountGroup;
@property (nonatomic, retain) NSArray *links;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) ICQLink *noteActivateLink;
@property (nonatomic, retain) ICQLink *noteClearLink;
@property (nonatomic, retain) ICQLink *noteDismissLink;
@property (nonatomic, retain) NSString *noteMessage;
@property (nonatomic, retain) NSString *noteTitle;
@property (nonatomic, retain) NSDictionary *serverDict;
@property (nonatomic, retain) NSString *title;

+ (void)clearFollowupWithController:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)altMessage;
- (id)altNoteMessage;
- (id)followupActionForLink:(id)arg1;
- (id)followupActionForLink:(id)arg1 needsFlow:(bool)arg2;
- (id)init;
- (id)initWithServerDictionary:(id)arg1;
- (bool)isForAccountGroup;
- (id)links;
- (id)message;
- (id)noteActivateLink;
- (id)noteClearLink;
- (id)noteDismissLink;
- (id)noteMessage;
- (id)noteTitle;
- (void)postFollowupWithController:(id)arg1;
- (void)postFollowupWithController:(id)arg1 completion:(id /* block */)arg2;
- (id)serverDict;
- (void)setAltMessage:(id)arg1;
- (void)setAltNoteMessage:(id)arg1;
- (void)setForAccountGroup:(bool)arg1;
- (void)setLinks:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNoteActivateLink:(id)arg1;
- (void)setNoteClearLink:(id)arg1;
- (void)setNoteDismissLink:(id)arg1;
- (void)setNoteMessage:(id)arg1;
- (void)setNoteTitle:(id)arg1;
- (void)setServerDict:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "FBAuthenticationManager-Protocol.h"
//#import "FBMSessionClassProvidable-Protocol.h"

@class FBFacebookCredentials, FBKeychain, FBMessengerUser, NSUserDefaults, UserSet;

@interface FBAuthenticationManagerImpl (version601)//: NSObject <FBAuthenticationManager, FBMSessionClassProvidable>
//{
//    FBFacebookCredentials *_facebookCredentials;
//    UserSet *_users;
//    NSUserDefaults *_defaults;
//    //id <FBProvider> _keychainProvider;
//    FBKeychain *_sessionKeychain;
//    FBKeychain *_machineIDKeychain;
//    FBFacebookCredentials *_keychainCredentials;
//    FBMessengerUser *_keychainUser;
//    FBFacebookCredentials *_pageCredentials;
//}

@property(retain, nonatomic) FBFacebookCredentials *pageCredentials; // @synthesize pageCredentials=_pageCredentials;
@property(retain, nonatomic) FBMessengerUser *keychainUser; // @synthesize keychainUser=_keychainUser;
@property(retain, nonatomic) FBFacebookCredentials *keychainCredentials; // @synthesize keychainCredentials=_keychainCredentials;
@property(retain, nonatomic) FBKeychain *machineIDKeychain; // @synthesize machineIDKeychain=_machineIDKeychain;
@property(retain, nonatomic) FBKeychain *sessionKeychain; // @synthesize sessionKeychain=_sessionKeychain;
//@property(retain, nonatomic) id <FBProvider> keychainProvider; // @synthesize keychainProvider=_keychainProvider;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) UserSet *users; // @synthesize users=_users;
@property(retain, nonatomic) FBFacebookCredentials *facebookCredentials; // @synthesize facebookCredentials=_facebookCredentials;
- (void)loadMachineIDKeychain;
- (void)loadSessionKeychain;
- (void)flushDefaults;
- (void)clearKeychainCredentials;
- (void)clear;
- (BOOL)hasKeychainUser;
- (void)saveKeychainCredentials:(id)arg1;
- (BOOL)hasKeychainCredentials;
- (id)mailboxViewerCredentials;
- (void)setMailboxViewerPageCredentialsOverride:(id)arg1;
- (void)prepareMailboxViewer;
- (id)mailboxViewer;
- (BOOL)hasMailboxViewer;
- (void)saveFacebookCredentials:(id)arg1;
- (BOOL)hasFacebookCredentials;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithUsers:(id)arg1 keychainProvider:(id)arg2 userDefaults:(id)arg3;

@end

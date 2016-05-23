



<!DOCTYPE html>
<html lang="en" class="">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>

    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/frameworks-536bcdee57776d99649d118d29a291c9d7b41d101696162d6456c87b07314253.css" media="all" rel="stylesheet" />
    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github-62cdd177894e003285e5b8b6fa72b4a92fb79f11a1ec44c2f2ae0f6f4ad2e724.css" media="all" rel="stylesheet" />
    
    
    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/site-c4b4365da282e51c06e107368db8502a2ecf82e64094d29d791b797372212de2.css" media="all" rel="stylesheet" />
    

    <link as="script" href="https://assets-cdn.github.com/assets/frameworks-b0aaa1e644508a5d5c3f7509d91f5f950c180e1d933a999f21747c5ec5411d92.js" rel="preload" />
    
    <link as="script" href="https://assets-cdn.github.com/assets/github-7c9ed6fd84382ad236d74c9ec5853f75fca061537cb1914241807b12c289216e.js" rel="preload" />

    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    <meta name="viewport" content="width=device-width">
    
    
    <title>linux-meson/amlglue.h at master · endlessm/linux-meson · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" href="/apple-touch-icon.png">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-57x57.png">
    <link rel="apple-touch-icon" sizes="60x60" href="/apple-touch-icon-60x60.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-72x72.png">
    <link rel="apple-touch-icon" sizes="76x76" href="/apple-touch-icon-76x76.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114x114.png">
    <link rel="apple-touch-icon" sizes="120x120" href="/apple-touch-icon-120x120.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144x144.png">
    <link rel="apple-touch-icon" sizes="152x152" href="/apple-touch-icon-152x152.png">
    <link rel="apple-touch-icon" sizes="180x180" href="/apple-touch-icon-180x180.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="https://avatars2.githubusercontent.com/u/1930958?v=3&amp;s=400" name="twitter:image:src" /><meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="endlessm/linux-meson" name="twitter:title" /><meta content="Contribute to linux-meson development by creating an account on GitHub." name="twitter:description" />
      <meta content="https://avatars2.githubusercontent.com/u/1930958?v=3&amp;s=400" property="og:image" /><meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="endlessm/linux-meson" property="og:title" /><meta content="https://github.com/endlessm/linux-meson" property="og:url" /><meta content="Contribute to linux-meson development by creating an account on GitHub." property="og:description" />
      <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">
    <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">
    <link rel="assets" href="https://assets-cdn.github.com/">
    
    <meta name="pjax-timeout" content="1000">
    

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>

    <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
<meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="52E78017:4C3D:CE87045:57434A0A" name="octolytics-dimension-request_id" />
<meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" name="analytics-location" />



  <meta class="js-ga-set" name="dimension1" content="Logged Out">



        <meta name="hostname" content="github.com">
    <meta name="user-login" content="">

        <meta name="expected-hostname" content="github.com">
      <meta name="js-proxy-site-detection-payload" content="NDE2ZmRjNzYyNGEzMGQ1NmUxY2M4YWZjNDg4NGNlNmJmN2E5OGM2NWQ0MTA3ODM3ZDIwYjYxMzJmMDBiMDk4M3x7InJlbW90ZV9hZGRyZXNzIjoiODIuMjMxLjEyOC4yMyIsInJlcXVlc3RfaWQiOiI1MkU3ODAxNzo0QzNEOkNFODcwNDU6NTc0MzRBMEEiLCJ0aW1lc3RhbXAiOjE0NjQwMjc2NTh9">


      <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#4078c0">
      <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

    <meta name="html-safe-nonce" content="d3841c47c4b9135e99aff0624d897a2db183036d">
    <meta content="518779421a8c1a83ef2c8ecc70b529dfcb371eb7" name="form-nonce" />

    <meta http-equiv="x-pjax-version" content="7af64f947f90d1be70195bdfb0943dda">
    

      
  <meta name="description" content="Contribute to linux-meson development by creating an account on GitHub.">
  <meta name="go-import" content="github.com/endlessm/linux-meson git https://github.com/endlessm/linux-meson.git">

  <meta content="1930958" name="octolytics-dimension-user_id" /><meta content="endlessm" name="octolytics-dimension-user_login" /><meta content="30656817" name="octolytics-dimension-repository_id" /><meta content="endlessm/linux-meson" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="30656817" name="octolytics-dimension-repository_network_root_id" /><meta content="endlessm/linux-meson" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/endlessm/linux-meson/commits/master.atom" rel="alternate" title="Recent Commits to linux-meson:master" type="application/atom+xml">


      <link rel="canonical" href="https://github.com/endlessm/linux-meson/blob/master/drivers/media/platform/meson/amlglue.h" data-pjax-transient>
  </head>


  <body class="logged-out   env-production  vis-public page-blob">
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"></div>
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>

    
    
    



          <header class="site-header js-details-container" role="banner">
  <div class="container-responsive">
    <a class="header-logo-invertocat" href="https://github.com/" aria-label="Homepage" data-ga-click="(Logged out) Header, go to homepage, icon:logo-wordmark">
      <svg aria-hidden="true" class="octicon octicon-mark-github" height="32" version="1.1" viewBox="0 0 16 16" width="32"><path d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59 0.4 0.07 0.55-0.17 0.55-0.38 0-0.19-0.01-0.82-0.01-1.49-2.01 0.37-2.53-0.49-2.69-0.94-0.09-0.23-0.48-0.94-0.82-1.13-0.28-0.15-0.68-0.52-0.01-0.53 0.63-0.01 1.08 0.58 1.23 0.82 0.72 1.21 1.87 0.87 2.33 0.66 0.07-0.52 0.28-0.87 0.51-1.07-1.78-0.2-3.64-0.89-3.64-3.95 0-0.87 0.31-1.59 0.82-2.15-0.08-0.2-0.36-1.02 0.08-2.12 0 0 0.67-0.21 2.2 0.82 0.64-0.18 1.32-0.27 2-0.27 0.68 0 1.36 0.09 2 0.27 1.53-1.04 2.2-0.82 2.2-0.82 0.44 1.1 0.16 1.92 0.08 2.12 0.51 0.56 0.82 1.27 0.82 2.15 0 3.07-1.87 3.75-3.65 3.95 0.29 0.25 0.54 0.73 0.54 1.48 0 1.07-0.01 1.93-0.01 2.2 0 0.21 0.15 0.46 0.55 0.38C13.71 14.53 16 11.53 16 8 16 3.58 12.42 0 8 0z"></path></svg>
    </a>

    <button class="btn-link right site-header-toggle js-details-target" type="button" aria-label="Toggle navigation">
      <svg aria-hidden="true" class="octicon octicon-three-bars" height="24" version="1.1" viewBox="0 0 12 16" width="18"><path d="M11.41 9H0.59c-0.59 0-0.59-0.41-0.59-1s0-1 0.59-1h10.81c0.59 0 0.59 0.41 0.59 1s0 1-0.59 1z m0-4H0.59c-0.59 0-0.59-0.41-0.59-1s0-1 0.59-1h10.81c0.59 0 0.59 0.41 0.59 1s0 1-0.59 1zM0.59 11h10.81c0.59 0 0.59 0.41 0.59 1s0 1-0.59 1H0.59c-0.59 0-0.59-0.41-0.59-1s0-1 0.59-1z"></path></svg>
    </button>

    <div class="site-header-menu">
      <nav class="site-header-nav site-header-nav-main">
        <a href="/personal" class="js-selected-navigation-item nav-item nav-item-personal" data-ga-click="Header, click, Nav menu - item:personal" data-selected-links="/personal /personal">
          Personal
</a>        <a href="/open-source" class="js-selected-navigation-item nav-item nav-item-opensource" data-ga-click="Header, click, Nav menu - item:opensource" data-selected-links="/open-source /open-source">
          Open source
</a>        <a href="/business" class="js-selected-navigation-item nav-item nav-item-business" data-ga-click="Header, click, Nav menu - item:business" data-selected-links="/business /business/features /business/customers /business">
          Business
</a>        <a href="/explore" class="js-selected-navigation-item nav-item nav-item-explore" data-ga-click="Header, click, Nav menu - item:explore" data-selected-links="/explore /trending /trending/developers /integrations /integrations/feature/code /integrations/feature/collaborate /integrations/feature/ship /explore">
          Explore
</a>      </nav>

      <div class="site-header-actions">
            <a class="btn btn-primary site-header-actions-btn" href="/join?source=header-repo" data-ga-click="(Logged out) Header, clicked Sign up, text:sign-up">Sign up</a>
          <a class="btn site-header-actions-btn mr-2" href="/login?return_to=%2Fendlessm%2Flinux-meson%2Fblob%2Fmaster%2Fdrivers%2Fmedia%2Fplatform%2Fmeson%2Famlglue.h" data-ga-click="(Logged out) Header, clicked Sign in, text:sign-in">Sign in</a>
      </div>

        <nav class="site-header-nav site-header-nav-secondary">
          <a class="nav-item" href="/pricing">Pricing</a>
          <a class="nav-item" href="/blog">Blog</a>
          <a class="nav-item" href="https://help.github.com">Support</a>
          <a class="nav-item header-search-link" href="https://github.com/search">Search GitHub</a>
              <div class="header-search scoped-search site-scoped-search js-site-search" role="search">
  <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/endlessm/linux-meson/search" class="js-site-search-form" data-scoped-search-url="/endlessm/linux-meson/search" data-unscoped-search-url="/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <label class="form-control header-search-wrapper js-chromeless-input-container">
      <div class="header-search-scope">This repository</div>
      <input type="text"
        class="form-control header-search-input js-site-search-focus js-site-search-field is-clearable"
        data-hotkey="s"
        name="q"
        placeholder="Search"
        aria-label="Search this repository"
        data-unscoped-placeholder="Search GitHub"
        data-scoped-placeholder="Search"
        tabindex="1"
        autocapitalize="off">
    </label>
</form></div>

        </nav>
    </div>
  </div>
</header>



    <div id="start-of-content" class="accessibility-aid"></div>

      <div id="js-flash-container">
</div>


    <div role="main" class="main-content">
        <div itemscope itemtype="http://schema.org/SoftwareSourceCode">
    <div id="js-repo-pjax-container" data-pjax-container>
      
<div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav">
  <div class="container repohead-details-container">

    

<ul class="pagehead-actions">

  <li>
      <a href="/login?return_to=%2Fendlessm%2Flinux-meson"
    class="btn btn-sm btn-with-count tooltipped tooltipped-n"
    aria-label="You must be signed in to watch a repository" rel="nofollow">
    <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6c4.94 0 7.94-6 7.94-6S13 2 8.06 2z m-0.06 10c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4z m2-4c0 1.11-0.89 2-2 2s-2-0.89-2-2 0.89-2 2-2 2 0.89 2 2z"></path></svg>
    Watch
  </a>
  <a class="social-count" href="/endlessm/linux-meson/watchers">
    29
  </a>

  </li>

  <li>
      <a href="/login?return_to=%2Fendlessm%2Flinux-meson"
    class="btn btn-sm btn-with-count tooltipped tooltipped-n"
    aria-label="You must be signed in to star a repository" rel="nofollow">
    <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path d="M14 6l-4.9-0.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14l4.33-2.33 4.33 2.33L10.4 9.26 14 6z"></path></svg>
    Star
  </a>

    <a class="social-count js-social-count" href="/endlessm/linux-meson/stargazers">
      11
    </a>

  </li>

  <li>
      <a href="/login?return_to=%2Fendlessm%2Flinux-meson"
        class="btn btn-sm btn-with-count tooltipped tooltipped-n"
        aria-label="You must be signed in to fork a repository" rel="nofollow">
        <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path d="M8 1c-1.11 0-2 0.89-2 2 0 0.73 0.41 1.38 1 1.72v1.28L5 8 3 6v-1.28c0.59-0.34 1-0.98 1-1.72 0-1.11-0.89-2-2-2S0 1.89 0 3c0 0.73 0.41 1.38 1 1.72v1.78l3 3v1.78c-0.59 0.34-1 0.98-1 1.72 0 1.11 0.89 2 2 2s2-0.89 2-2c0-0.73-0.41-1.38-1-1.72V9.5l3-3V4.72c0.59-0.34 1-0.98 1-1.72 0-1.11-0.89-2-2-2zM2 4.2c-0.66 0-1.2-0.55-1.2-1.2s0.55-1.2 1.2-1.2 1.2 0.55 1.2 1.2-0.55 1.2-1.2 1.2z m3 10c-0.66 0-1.2-0.55-1.2-1.2s0.55-1.2 1.2-1.2 1.2 0.55 1.2 1.2-0.55 1.2-1.2 1.2z m3-10c-0.66 0-1.2-0.55-1.2-1.2s0.55-1.2 1.2-1.2 1.2 0.55 1.2 1.2-0.55 1.2-1.2 1.2z"></path></svg>
        Fork
      </a>

    <a href="/endlessm/linux-meson/network" class="social-count">
      6
    </a>
  </li>
</ul>

    <h1 class="entry-title public ">
  <svg aria-hidden="true" class="octicon octicon-repo" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M4 9h-1v-1h1v1z m0-3h-1v1h1v-1z m0-2h-1v1h1v-1z m0-2h-1v1h1v-1z m8-1v12c0 0.55-0.45 1-1 1H6v2l-1.5-1.5-1.5 1.5V14H1c-0.55 0-1-0.45-1-1V1C0 0.45 0.45 0 1 0h10c0.55 0 1 0.45 1 1z m-1 10H1v2h2v-1h3v1h5V11z m0-10H2v9h9V1z"></path></svg>
  <span class="author" itemprop="author"><a href="/endlessm" class="url fn" rel="author">endlessm</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a href="/endlessm/linux-meson" data-pjax="#js-repo-pjax-container">linux-meson</a></strong>

</h1>

  </div>
  <div class="container">
    
<nav class="reponav js-repo-nav js-sidenav-container-pjax"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/endlessm/linux-meson" aria-selected="true" class="js-selected-navigation-item selected reponav-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /endlessm/linux-meson" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-code" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path d="M9.5 3l-1.5 1.5 3.5 3.5L8 11.5l1.5 1.5 4.5-5L9.5 3zM4.5 3L0 8l4.5 5 1.5-1.5L2.5 8l3.5-3.5L4.5 3z"></path></svg>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>


  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/endlessm/linux-meson/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /endlessm/linux-meson/pulls" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-git-pull-request" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M11 11.28c0-1.73 0-6.28 0-6.28-0.03-0.78-0.34-1.47-0.94-2.06s-1.28-0.91-2.06-0.94c0 0-1.02 0-1 0V0L4 3l3 3V4h1c0.27 0.02 0.48 0.11 0.69 0.31s0.3 0.42 0.31 0.69v6.28c-0.59 0.34-1 0.98-1 1.72 0 1.11 0.89 2 2 2s2-0.89 2-2c0-0.73-0.41-1.38-1-1.72z m-1 2.92c-0.66 0-1.2-0.55-1.2-1.2s0.55-1.2 1.2-1.2 1.2 0.55 1.2 1.2-0.55 1.2-1.2 1.2zM4 3c0-1.11-0.89-2-2-2S0 1.89 0 3c0 0.73 0.41 1.38 1 1.72 0 1.55 0 5.56 0 6.56-0.59 0.34-1 0.98-1 1.72 0 1.11 0.89 2 2 2s2-0.89 2-2c0-0.73-0.41-1.38-1-1.72V4.72c0.59-0.34 1-0.98 1-1.72z m-0.8 10c0 0.66-0.55 1.2-1.2 1.2s-1.2-0.55-1.2-1.2 0.55-1.2 1.2-1.2 1.2 0.55 1.2 1.2z m-1.2-8.8c-0.66 0-1.2-0.55-1.2-1.2s0.55-1.2 1.2-1.2 1.2 0.55 1.2 1.2-0.55 1.2-1.2 1.2z"></path></svg>
      <span itemprop="name">Pull requests</span>
      <span class="counter">9</span>
      <meta itemprop="position" content="3">
</a>  </span>



  <a href="/endlessm/linux-meson/pulse" class="js-selected-navigation-item reponav-item" data-selected-links="pulse /endlessm/linux-meson/pulse">
    <svg aria-hidden="true" class="octicon octicon-pulse" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path d="M11.5 8L8.8 5.4 6.6 8.5 5.5 1.6 2.38 8H0V10h3.6L4.5 8.2l0.9 5.4L9 8.5l1.6 1.5H14V8H11.5z"></path></svg>
    Pulse
</a>
  <a href="/endlessm/linux-meson/graphs" class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors /endlessm/linux-meson/graphs">
    <svg aria-hidden="true" class="octicon octicon-graph" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path d="M16 14v1H0V0h1v14h15z m-11-1H3V8h2v5z m4 0H7V3h2v10z m4 0H11V6h2v7z"></path></svg>
    Graphs
</a>

</nav>

  </div>
</div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    

<a href="/endlessm/linux-meson/blob/21f4669e457c85533d0fe76444b331a727aab75d/drivers/media/platform/meson/amlglue.h" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:2cc44d07a0b960ae07319aa57c55361d -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu branch-select-menu js-menu-container js-select-menu left">
  <button class="btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    title="master"
    type="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <i>Branch:</i>
    <span class="js-select-button css-truncate-target">master</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path d="M7.48 8l3.75 3.75-1.48 1.48-3.75-3.75-3.75 3.75-1.48-1.48 3.75-3.75L0.77 4.25l1.48-1.48 3.75 3.75 3.75-3.75 1.48 1.48-3.75 3.75z"></path></svg>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/1x-scaler/drivers/media/platform/meson/amlglue.h"
               data-name="1x-scaler"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="1x-scaler">
                1x-scaler
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/T10955/drivers/media/platform/meson/amlglue.h"
               data-name="T10955"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="T10955">
                T10955
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/Version_3.10-2015-04-01-066611d38a/drivers/media/platform/meson/amlglue.h"
               data-name="Version_3.10-2015-04-01-066611d38a"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="Version_3.10-2015-04-01-066611d38a">
                Version_3.10-2015-04-01-066611d38a
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/Version_3.10-2015-04-01-066611d38a_2/drivers/media/platform/meson/amlglue.h"
               data-name="Version_3.10-2015-04-01-066611d38a_2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="Version_3.10-2015-04-01-066611d38a_2">
                Version_3.10-2015-04-01-066611d38a_2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/amlogic-fiq-bis/drivers/media/platform/meson/amlglue.h"
               data-name="amlogic-fiq-bis"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="amlogic-fiq-bis">
                amlogic-fiq-bis
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/amlogic-fiq/drivers/media/platform/meson/amlglue.h"
               data-name="amlogic-fiq"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="amlogic-fiq">
                amlogic-fiq
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/amlvdec/drivers/media/platform/meson/amlglue.h"
               data-name="amlvdec"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="amlvdec">
                amlvdec
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/atv185-bcmdhd-1/drivers/media/platform/meson/amlglue.h"
               data-name="atv185-bcmdhd-1"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="atv185-bcmdhd-1">
                atv185-bcmdhd-1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/atv185/drivers/media/platform/meson/amlglue.h"
               data-name="atv185"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="atv185">
                atv185
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/c1-fiq/drivers/media/platform/meson/amlglue.h"
               data-name="c1-fiq"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="c1-fiq">
                c1-fiq
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/debian-eos2.4/drivers/media/platform/meson/amlglue.h"
               data-name="debian-eos2.4"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="debian-eos2.4">
                debian-eos2.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/debian-eos2.5/drivers/media/platform/meson/amlglue.h"
               data-name="debian-eos2.5"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="debian-eos2.5">
                debian-eos2.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/debian-eos2.6/drivers/media/platform/meson/amlglue.h"
               data-name="debian-eos2.6"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="debian-eos2.6">
                debian-eos2.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/debian-master-atv185/drivers/media/platform/meson/amlglue.h"
               data-name="debian-master-atv185"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="debian-master-atv185">
                debian-master-atv185
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/debian-master/drivers/media/platform/meson/amlglue.h"
               data-name="debian-master"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="debian-master">
                debian-master
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/dpms/drivers/media/platform/meson/amlglue.h"
               data-name="dpms"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="dpms">
                dpms
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/ec100-review/drivers/media/platform/meson/amlglue.h"
               data-name="ec100-review"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="ec100-review">
                ec100-review
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/ec100/drivers/media/platform/meson/amlglue.h"
               data-name="ec100"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="ec100">
                ec100
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/efuses/drivers/media/platform/meson/amlglue.h"
               data-name="efuses"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="efuses">
                efuses
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/eos2.4/drivers/media/platform/meson/amlglue.h"
               data-name="eos2.4"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="eos2.4">
                eos2.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/eos2.5/drivers/media/platform/meson/amlglue.h"
               data-name="eos2.5"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="eos2.5">
                eos2.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/eos2.6/drivers/media/platform/meson/amlglue.h"
               data-name="eos2.6"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="eos2.6">
                eos2.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/fiq-NOP/drivers/media/platform/meson/amlglue.h"
               data-name="fiq-NOP"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="fiq-NOP">
                fiq-NOP
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/fiq-usb-refactor/drivers/media/platform/meson/amlglue.h"
               data-name="fiq-usb-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="fiq-usb-refactor">
                fiq-usb-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/fiq-usb/drivers/media/platform/meson/amlglue.h"
               data-name="fiq-usb"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="fiq-usb">
                fiq-usb
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/fiq/drivers/media/platform/meson/amlglue.h"
               data-name="fiq"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="fiq">
                fiq
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/ge2d-bitblt/drivers/media/platform/meson/amlglue.h"
               data-name="ge2d-bitblt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="ge2d-bitblt">
                ge2d-bitblt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/hack/drm-cleanup/drivers/media/platform/meson/amlglue.h"
               data-name="hack/drm-cleanup"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="hack/drm-cleanup">
                hack/drm-cleanup
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/hack/drm/drivers/media/platform/meson/amlglue.h"
               data-name="hack/drm"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="hack/drm">
                hack/drm
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/hack/mem-monitor/drivers/media/platform/meson/amlglue.h"
               data-name="hack/mem-monitor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="hack/mem-monitor">
                hack/mem-monitor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/huawei_cdc_ndm/drivers/media/platform/meson/amlglue.h"
               data-name="huawei_cdc_ndm"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="huawei_cdc_ndm">
                huawei_cdc_ndm
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/kk-rebase/drivers/media/platform/meson/amlglue.h"
               data-name="kk-rebase"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="kk-rebase">
                kk-rebase
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/endlessm/linux-meson/blob/master/drivers/media/platform/meson/amlglue.h"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="master">
                master
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/meson8b-mainline/drivers/media/platform/meson/amlglue.h"
               data-name="meson8b-mainline"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="meson8b-mainline">
                meson8b-mainline
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/mesondrm/drivers/media/platform/meson/amlglue.h"
               data-name="mesondrm"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="mesondrm">
                mesondrm
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/r5p1/drivers/media/platform/meson/amlglue.h"
               data-name="r5p1"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="r5p1">
                r5p1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/rcu-backport-from-4.0/drivers/media/platform/meson/amlglue.h"
               data-name="rcu-backport-from-4.0"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="rcu-backport-from-4.0">
                rcu-backport-from-4.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/vdec-locking/drivers/media/platform/meson/amlglue.h"
               data-name="shell/vdec-locking"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/vdec-locking">
                shell/vdec-locking
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/2318/drivers/media/platform/meson/amlglue.h"
               data-name="shell/2318"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/2318">
                shell/2318
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/4437-2/drivers/media/platform/meson/amlglue.h"
               data-name="shell/4437-2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/4437-2">
                shell/4437-2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/4437-3/drivers/media/platform/meson/amlglue.h"
               data-name="shell/4437-3"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/4437-3">
                shell/4437-3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/4437/drivers/media/platform/meson/amlglue.h"
               data-name="shell/4437"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/4437">
                shell/4437
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5001/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5001"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5001">
                shell/5001
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5025-2/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5025-2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5025-2">
                shell/5025-2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5168/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5168"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5168">
                shell/5168
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5170/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5170"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5170">
                shell/5170
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5233/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5233"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5233">
                shell/5233
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5234-2-debian/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5234-2-debian"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5234-2-debian">
                shell/5234-2-debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5234-2/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5234-2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5234-2">
                shell/5234-2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5270-kernel/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5270-kernel"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5270-kernel">
                shell/5270-kernel
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5507-debian/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5507-debian"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5507-debian">
                shell/5507-debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5507/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5507"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5507">
                shell/5507
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5540-emmc/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5540-emmc"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5540-emmc">
                shell/5540-emmc
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5560/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5560"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5560">
                shell/5560
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5562/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5562"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5562">
                shell/5562
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5689-mono/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5689-mono"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5689-mono">
                shell/5689-mono
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5689/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5689"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5689">
                shell/5689
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5720-debian/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5720-debian"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5720-debian">
                shell/5720-debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5754-broonie/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5754-broonie"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5754-broonie">
                shell/5754-broonie
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5876/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5876"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5876">
                shell/5876
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5879-backport/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5879-backport"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5879-backport">
                shell/5879-backport
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5899/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5899"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5899">
                shell/5899
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5907/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5907"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5907">
                shell/5907
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/5920/drivers/media/platform/meson/amlglue.h"
               data-name="shell/5920"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/5920">
                shell/5920
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/6037/drivers/media/platform/meson/amlglue.h"
               data-name="shell/6037"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/6037">
                shell/6037
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/6109/drivers/media/platform/meson/amlglue.h"
               data-name="shell/6109"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/6109">
                shell/6109
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/6112-debian/drivers/media/platform/meson/amlglue.h"
               data-name="shell/6112-debian"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/6112-debian">
                shell/6112-debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/6112/drivers/media/platform/meson/amlglue.h"
               data-name="shell/6112"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/6112">
                shell/6112
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/6163-unified-skip-dumb/drivers/media/platform/meson/amlglue.h"
               data-name="shell/6163-unified-skip-dumb"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/6163-unified-skip-dumb">
                shell/6163-unified-skip-dumb
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/6163/drivers/media/platform/meson/amlglue.h"
               data-name="shell/6163"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/6163">
                shell/6163
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/6274/drivers/media/platform/meson/amlglue.h"
               data-name="shell/6274"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/6274">
                shell/6274
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/shell/6328/drivers/media/platform/meson/amlglue.h"
               data-name="shell/6328"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="shell/6328">
                shell/6328
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/endlessm/linux-meson/blob/vdec-mm/drivers/media/platform/meson/amlglue.h"
               data-name="vdec-mm"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="vdec-mm">
                vdec-mm
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/archive/amlogic-2015-01-15-321cfb5a46/drivers/media/platform/meson/amlglue.h"
              data-name="archive/amlogic-2015-01-15-321cfb5a46"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="archive/amlogic-2015-01-15-321cfb5a46">
                archive/amlogic-2015-01-15-321cfb5a46
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/archive/amlogic-2014-08-24-ffa91141da/drivers/media/platform/meson/amlglue.h"
              data-name="archive/amlogic-2014-08-24-ffa91141da"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="archive/amlogic-2014-08-24-ffa91141da">
                archive/amlogic-2014-08-24-ffa91141da
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Version_3.10.33.20150928/drivers/media/platform/meson/amlglue.h"
              data-name="Version_3.10.33.20150928"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Version_3.10.33.20150928">
                Version_3.10.33.20150928
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Version_3.10.33.20150928_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Version_3.10.33.20150928_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Version_3.10.33.20150928_debian">
                Version_3.10.33.20150928_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Version_3.10.33.20150401/drivers/media/platform/meson/amlglue.h"
              data-name="Version_3.10.33.20150401"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Version_3.10.33.20150401">
                Version_3.10.33.20150401
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Version_3.10.33.20150115/drivers/media/platform/meson/amlglue.h"
              data-name="Version_3.10.33.20150115"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Version_3.10.33.20150115">
                Version_3.10.33.20150115
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Version_3.10.33.20150115_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Version_3.10.33.20150115_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Version_3.10.33.20150115_debian">
                Version_3.10.33.20150115_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Version_3.10.33/drivers/media/platform/meson/amlglue.h"
              data-name="Version_3.10.33"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Version_3.10.33">
                Version_3.10.33
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Version_3.10.33_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Version_3.10.33_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Version_3.10.33_debian">
                Version_3.10.33_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.6.1/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.6.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.6.1">
                Release_2.6.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.6.1_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.6.1_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.6.1_debian">
                Release_2.6.1_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.6.0/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.6.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.6.0">
                Release_2.6.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.6.0_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.6.0_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.6.0_debian">
                Release_2.6.0_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.6.0-rc1/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.6.0-rc1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.6.0-rc1">
                Release_2.6.0-rc1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.6.0-rc1_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.6.0-rc1_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.6.0-rc1_debian">
                Release_2.6.0-rc1_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.5/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.5"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.5">
                Release_2.5.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.5_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.5_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.5_debian">
                Release_2.5.5_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.4/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.4"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.4">
                Release_2.5.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.4_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.4_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.4_debian">
                Release_2.5.4_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.3/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.3">
                Release_2.5.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.3_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.3_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.3_debian">
                Release_2.5.3_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.2/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.2">
                Release_2.5.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.2_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.2_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.2_debian">
                Release_2.5.2_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.1/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.1">
                Release_2.5.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.1_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.1_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.1_debian">
                Release_2.5.1_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.0/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.0">
                Release_2.5.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.0_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.0_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.0_debian">
                Release_2.5.0_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.0-rc1/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.0-rc1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.0-rc1">
                Release_2.5.0-rc1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.5.0-rc1_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.5.0-rc1_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.5.0-rc1_debian">
                Release_2.5.0-rc1_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.4.2/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.4.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.4.2">
                Release_2.4.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.4.2_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.4.2_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.4.2_debian">
                Release_2.4.2_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.4.1/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.4.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.4.1">
                Release_2.4.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.4.1_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.4.1_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.4.1_debian">
                Release_2.4.1_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.4.0/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.4.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.4.0">
                Release_2.4.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.4.0_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.4.0_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.4.0_debian">
                Release_2.4.0_debian
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.4.0-rc1/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.4.0-rc1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.4.0-rc1">
                Release_2.4.0-rc1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/endlessm/linux-meson/tree/Release_2.4.0-rc1_debian/drivers/media/platform/meson/amlglue.h"
              data-name="Release_2.4.0-rc1_debian"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5L4 13 0 9l1.5-1.5 2.5 2.5 6.5-6.5 1.5 1.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="Release_2.4.0-rc1_debian">
                Release_2.4.0-rc1_debian
              </span>
            </a>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="btn-group right">
    <a href="/endlessm/linux-meson/find/master"
          class="js-pjax-capture-input btn btn-sm"
          data-pjax
          data-hotkey="t">
      Find file
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button tooltipped tooltipped-s" data-copied-hint="Copied!" type="button">Copy path</button>
  </div>
  <div class="breadcrumb js-zeroclipboard-target">
    <span class="repo-root js-repo-root"><span class="js-path-segment"><a href="/endlessm/linux-meson"><span>linux-meson</span></a></span></span><span class="separator">/</span><span class="js-path-segment"><a href="/endlessm/linux-meson/tree/master/drivers"><span>drivers</span></a></span><span class="separator">/</span><span class="js-path-segment"><a href="/endlessm/linux-meson/tree/master/drivers/media"><span>media</span></a></span><span class="separator">/</span><span class="js-path-segment"><a href="/endlessm/linux-meson/tree/master/drivers/media/platform"><span>platform</span></a></span><span class="separator">/</span><span class="js-path-segment"><a href="/endlessm/linux-meson/tree/master/drivers/media/platform/meson"><span>meson</span></a></span><span class="separator">/</span><strong class="final-path">amlglue.h</strong>
  </div>
</div>


  <div class="commit-tease">
      <span class="right">
        <a class="commit-tease-sha" href="/endlessm/linux-meson/commit/a99a16ab939d9e9c727a14e41e737b8382144069" data-pjax>
          a99a16a
        </a>
        <relative-time datetime="2015-10-15T21:12:10Z">Oct 15, 2015</relative-time>
      </span>
      <div>
        <img alt="@dsd" class="avatar" height="20" src="https://avatars2.githubusercontent.com/u/81864?v=3&amp;s=40" width="20" />
        <a href="/dsd" class="user-mention" rel="contributor">dsd</a>
          <a href="/endlessm/linux-meson/commit/a99a16ab939d9e9c727a14e41e737b8382144069" class="message" data-pjax="true" title="meson-vdec: use a timer to detect EOS

Userspace tells us when it has finished sending the compressed
video to the OUTPUT interface, but we don&#39;t get a clear indication
from the decoder that it has finished giving us all the decoded
video frames.

Once userspace indicates EOS, start a timer and use some heuristics
to detect when we&#39;ve received the last video frame.">meson-vdec: use a timer to detect EOS</a>
      </div>

    <div class="commit-tease-contributors">
      <button type="button" class="btn-link muted-link contributors-toggle" data-facebox="#blob_contributors_box">
        <strong>1</strong>
         contributor
      </button>
      
    </div>

    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header" data-facebox-id="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list" data-facebox-id="facebox-description">
          <li class="facebox-user-list-item">
            <img alt="@dsd" height="24" src="https://avatars0.githubusercontent.com/u/81864?v=3&amp;s=48" width="24" />
            <a href="/dsd">dsd</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file">
  <div class="file-header">
  <div class="file-actions">

    <div class="btn-group">
      <a href="/endlessm/linux-meson/raw/master/drivers/media/platform/meson/amlglue.h" class="btn btn-sm " id="raw-url">Raw</a>
        <a href="/endlessm/linux-meson/blame/master/drivers/media/platform/meson/amlglue.h" class="btn btn-sm js-update-url-with-hash">Blame</a>
      <a href="/endlessm/linux-meson/commits/master/drivers/media/platform/meson/amlglue.h" class="btn btn-sm " rel="nofollow">History</a>
    </div>


        <button type="button" class="btn-octicon disabled tooltipped tooltipped-nw"
          aria-label="You must be signed in to make or propose changes">
          <svg aria-hidden="true" class="octicon octicon-pencil" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path d="M0 12v3h3l8-8-3-3L0 12z m3 2H1V12h1v1h1v1z m10.3-9.3l-1.3 1.3-3-3 1.3-1.3c0.39-0.39 1.02-0.39 1.41 0l1.59 1.59c0.39 0.39 0.39 1.02 0 1.41z"></path></svg>
        </button>
        <button type="button" class="btn-octicon btn-octicon-danger disabled tooltipped tooltipped-nw"
          aria-label="You must be signed in to make or propose changes">
          <svg aria-hidden="true" class="octicon octicon-trashcan" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M10 2H8c0-0.55-0.45-1-1-1H4c-0.55 0-1 0.45-1 1H1c-0.55 0-1 0.45-1 1v1c0 0.55 0.45 1 1 1v9c0 0.55 0.45 1 1 1h7c0.55 0 1-0.45 1-1V5c0.55 0 1-0.45 1-1v-1c0-0.55-0.45-1-1-1z m-1 12H2V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9z m1-10H1v-1h9v1z"></path></svg>
        </button>
  </div>

  <div class="file-info">
      22 lines (15 sloc)
      <span class="file-info-divider"></span>
    785 Bytes
  </div>
</div>

  

  <div itemprop="text" class="blob-wrapper data type-c">
      <table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>../../../amlogic/amports/streambuf.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>../../../amlogic/amports/esparser.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>../../../amlogic/amports/amports_priv.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>../../../amlogic/amports/vdec.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PARSER_VIDEO</span>        (ES_TYPE_VIDEO)</td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">READ_VREG</span>(<span class="pl-v">r</span>) __raw_readl((<span class="pl-k">volatile</span> <span class="pl-k">void</span> __iomem *)DOS_REG_ADDR(r))</td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line"><span class="pl-k">extern</span> <span class="pl-k">struct</span> dec_sysinfo amstream_dec_info;</td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">stream_port_t</span> *<span class="pl-en">amstream_find_port</span>(<span class="pl-k">const</span> <span class="pl-k">char</span> *name);</td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">amstream_port_open</span>(<span class="pl-c1">stream_port_t</span> *this);</td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> <span class="pl-en">amstream_port_release</span>(<span class="pl-c1">stream_port_t</span> *port);</td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> <span class="pl-en">video_port_init</span>(<span class="pl-c1">stream_port_t</span> *port, <span class="pl-k">struct</span> stream_buf_s * pbuf);</td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">esparser_start_search</span>(u32 parser_type, u32 phys_addr, u32 len);</td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">esparser_set_search_done_cb</span>(<span class="pl-k">void</span> *data, <span class="pl-k">void</span> *cb);</td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span> <span class="pl-en">vh264_set_params_cb</span>(<span class="pl-k">void</span> *data, <span class="pl-k">void</span> *cb);</td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line"><span class="pl-k">bool</span> <span class="pl-en">vh264_output_is_starved</span>(<span class="pl-k">void</span>);</td>
      </tr>
</table>

  </div>

</div>

<button type="button" data-facebox="#jump-to-line" data-facebox-class="linejump" data-hotkey="l" class="hidden">Jump to Line</button>
<div id="jump-to-line" style="display:none">
  <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="form-control linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>

  </div>
  <div class="modal-backdrop"></div>
</div>


    </div>
  </div>

    </div>

        <div class="container site-footer-container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links right">
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage" class="site-footer-mark" title="GitHub">
      <svg aria-hidden="true" class="octicon octicon-mark-github" height="24" version="1.1" viewBox="0 0 16 16" width="24"><path d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59 0.4 0.07 0.55-0.17 0.55-0.38 0-0.19-0.01-0.82-0.01-1.49-2.01 0.37-2.53-0.49-2.69-0.94-0.09-0.23-0.48-0.94-0.82-1.13-0.28-0.15-0.68-0.52-0.01-0.53 0.63-0.01 1.08 0.58 1.23 0.82 0.72 1.21 1.87 0.87 2.33 0.66 0.07-0.52 0.28-0.87 0.51-1.07-1.78-0.2-3.64-0.89-3.64-3.95 0-0.87 0.31-1.59 0.82-2.15-0.08-0.2-0.36-1.02 0.08-2.12 0 0 0.67-0.21 2.2 0.82 0.64-0.18 1.32-0.27 2-0.27 0.68 0 1.36 0.09 2 0.27 1.53-1.04 2.2-0.82 2.2-0.82 0.44 1.1 0.16 1.92 0.08 2.12 0.51 0.56 0.82 1.27 0.82 2.15 0 3.07-1.87 3.75-3.65 3.95 0.29 0.25 0.54 0.73 0.54 1.48 0 1.07-0.01 1.93-0.01 2.2 0 0.21 0.15 0.46 0.55 0.38C13.71 14.53 16 11.53 16 8 16 3.58 12.42 0 8 0z"></path></svg>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2016 <span title="0.05154s from github-fe155-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact</a></li>
        <li><a href="https://help.github.com" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>
  </div>
</div>



    

    <div id="ajax-error-message" class="ajax-error-message flash flash-error">
      <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path d="M15.72 12.5l-6.85-11.98C8.69 0.21 8.36 0.02 8 0.02s-0.69 0.19-0.87 0.5l-6.85 11.98c-0.18 0.31-0.18 0.69 0 1C0.47 13.81 0.8 14 1.15 14h13.7c0.36 0 0.69-0.19 0.86-0.5S15.89 12.81 15.72 12.5zM9 12H7V10h2V12zM9 9H7V5h2V9z"></path></svg>
      <button type="button" class="flash-close js-flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
        <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M7.48 8l3.75 3.75-1.48 1.48-3.75-3.75-3.75 3.75-1.48-1.48 3.75-3.75L0.77 4.25l1.48-1.48 3.75 3.75 3.75-3.75 1.48 1.48-3.75 3.75z"></path></svg>
      </button>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/compat-7db58f8b7b91111107fac755dd8b178fe7db0f209ced51fc339c446ad3f8da2b.js"></script>
      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-b0aaa1e644508a5d5c3f7509d91f5f950c180e1d933a999f21747c5ec5411d92.js"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-7c9ed6fd84382ad236d74c9ec5853f75fca061537cb1914241807b12c289216e.js"></script>
      
      
      
      
      
      
    <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner hidden">
      <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path d="M15.72 12.5l-6.85-11.98C8.69 0.21 8.36 0.02 8 0.02s-0.69 0.19-0.87 0.5l-6.85 11.98c-0.18 0.31-0.18 0.69 0 1C0.47 13.81 0.8 14 1.15 14h13.7c0.36 0 0.69-0.19 0.86-0.5S15.89 12.81 15.72 12.5zM9 12H7V10h2V12zM9 9H7V5h2V9z"></path></svg>
      <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
      <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
    </div>
    <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M7.48 8l3.75 3.75-1.48 1.48-3.75-3.75-3.75 3.75-1.48-1.48 3.75-3.75L0.77 4.25l1.48-1.48 3.75 3.75 3.75-3.75 1.48 1.48-3.75 3.75z"></path></svg>
    </button>
  </div>
</div>

  </body>
</html>


.. NOTE: we use cross-references to highlight new functions and classes.
   Please follow the examples below like :func:`mne.stats.f_mway_rm`, so the
   whats_new page will have a link to the function/class documentation.

.. NOTE: there are 3 separate sections for changes, based on type:
   - "Enhancements" for new features
   - "Bugs" for bug fixes
   - "API changes" for backward-incompatible changes

.. NOTE: changes from first-time contributors should be added to the TOP of
   the relevant section (Enhancements / Bugs / API changes), and should look
   like this (where xxxx is the pull request number):

       - description of enhancement/bugfix/API change (:gh:`xxxx` by
         :newcontrib:`Firstname Lastname`)

   Also add a corresponding entry for yourself in doc/changes/names.inc

.. _current:

Current (1.5.dev0)
------------------

Enhancements
~~~~~~~~~~~~
- Add ``cmap`` argument for the :func:`mne.viz.plot_sensors` (:gh:`11720` by :newcontrib:`Gennadiy Belonosov`)
- When failing to locate a file, we now print the full path in quotation marks to help spot accidentally added trailing spaces (:gh:`11718` by `Richard Höchenberger`_)

Bugs
~~~~
- Extended test to highlight bug in :func:`mne.stats.permutation_t_test` (:gh:`11575` by :newcontrib:`Joshua Calder-Travis`)
- Fix bug with :func:`mne.forward.restrict_forward_to_label` where cortical patch information was not adjusted (:gh:`11694` by `Eric Larson`_)
- Fix bug with PySide6 compatibility (:gh:`11721` by `Eric Larson`_)
- Fix hanging interpreter with matplotlib figures using ``mne/viz/_mpl_figure.py`` in spyder console and jupyter notebooks`(:gh:`11696` by `Mathieu Scheltienne`_)
- Fix bug with overlapping text for :meth:`mne.Evoked.plot` (:gh:`11698` by `Alex Rockhill`_)

API changes
~~~~~~~~~~~
- The ``baseline`` argument can now be array-like (e.g. ``list``, ``tuple``, ``np.ndarray``, ...) instead of only a ``tuple`` (:gh:`11713` by `Clemens Brunner`_)
